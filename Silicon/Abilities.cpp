#include "Abilities.h"

namespace Abilities {
	void GiveAbilitySet(AFortPawn* Pawn, UFortAbilitySet* Set) {
		for (auto& Ability : Set->GameplayAbilities) {
			
			FGameplayAbilitySpec Spec{ -1,-1,-1 };
			Spec.Ability = Ability->DefaultObject->Cast<UFortGameplayAbility*>();
			Spec.Level = 1;
			Spec.InputID = -1;
			Spec.SourceObject = nullptr;
			Spec.Handle.Handle = rand();
			GiveAbility(Pawn->AbilitySystemComponent, &Spec.Handle, Spec);
		}
	}

	void InternalServerTryActivateAbilityHook(UAbilitySystemComponent* Comp, FGameplayAbilitySpecHandle Handle, bool InputPressed, const struct FPredictionKey& PredictionKey) {
		//printf("InternalServerTryActivateAbilityHook");
		FGameplayAbilitySpec* SpecToUse = nullptr;
		
		for (const FGameplayAbilitySpec& Spec : Comp->ActivatableAbilities.Items) {
			if (Spec.Handle == Handle) {
				if (!Spec.PendingRemove) {
					SpecToUse = const_cast<FGameplayAbilitySpec*>(&Spec);
				}
			}
		}

		if (!SpecToUse) {
			Comp->ClientActivateAbilityFailed(Handle, PredictionKey.Current);
			return;
		}

		const UGameplayAbility* AbilityToActivate = SpecToUse->Ability;

		if (!AbilityToActivate) {
			Comp->ClientActivateAbilityFailed(Handle, PredictionKey.Current);
			return;
		}

		if (AbilityToActivate->NetExecutionPolicy == EGameplayAbilityNetExecutionPolicy::ServerOnly) {
			Comp->ClientActivateAbilityFailed(Handle, PredictionKey.Current);
			return;
		}

		SpecToUse->InputPressed = true;

		UGameplayAbility* InstancedAbility = nullptr;
		FGameplayEventData* TriggerEventData = nullptr;


		if (InternalTryActivateAbility(Comp, Handle, PredictionKey, &InstancedAbility, nullptr, TriggerEventData)) {

		}
		else {
			Comp->ClientActivateAbilityFailed(Handle, PredictionKey.Current);
			SpecToUse->InputPressed = false;
		}
		Comp->ActivatableAbilities.MarkItemDirty(*SpecToUse);
	}
}