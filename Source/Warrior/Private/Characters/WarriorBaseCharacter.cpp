// Vince Petrelli All Rights Reserved


#include "Characters/WarriorBaseCharacter.h"

// Sets default values
AWarriorBaseCharacter::AWarriorBaseCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false; // Tick 자격 박탈
	PrimaryActorTick.bStartWithTickEnabled = false; // 시작시 Tick을 끔. 추후 Tick 켜는것 가능

	GetMesh()->bReceivesDecals = false;
}

