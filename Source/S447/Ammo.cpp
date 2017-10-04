// AFO Studio   *****    Cory Brown

#include "Ammo.h"


// Sets default values
AAmmo::AAmmo()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AAmmo::BeginPlay()
{
	Super::BeginPlay();
	Speed = 20.0f;
	Time = 0.0f;
}

// Called every frame
void AAmmo::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	Time += Speed * DeltaTime;
	if (Time >= 60.0f)
	{
		Time = 0;
	}

	AddActorLocalOffset(FVector(0, 0, sin(Time)));

}

