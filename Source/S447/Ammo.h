// AFO Studio   *****    Cory Brown

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Ammo.generated.h"

UCLASS()
class S447_API AAmmo : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AAmmo(); // Constructor

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	virtual bool ShouldTickIfViewportsOnly() const override
	{
		return true;
	}

	UPROPERTY(BlueprintReadWrite, Category = "Ammo", EditAnywhere)
	float Speed;

	UPROPERTY(BlueprintReadWrite, Category = "Ammo", EditAnywhere)
	float Time;

	UFUNCTION(BlueprintCallable, Category = "Ammo")
	void SetSpeed(float inSpeed)
	{

		Speed = inSpeed;
	}

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;


};
