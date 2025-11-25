#pragma once

class AActor;

class UComponent
{
public:
	UComponent(AActor* Owner);
	virtual ~UComponent();

	virtual void Tick() = 0;

	AActor* GetOwner() const;
	void SetOwner(AActor* InOwner);

	virtual int GetComponentID();

protected:
	AActor* Owner;
	int ComponentID = 0;
};

