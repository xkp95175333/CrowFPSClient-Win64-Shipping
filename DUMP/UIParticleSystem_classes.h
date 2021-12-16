// Class UIParticleSystem.ParticleSystemWidget
// Size: 0x138 (Inherited: 0x108)
struct UParticleSystemWidget : UWidget {
	struct UParticleSystem* ParticleSystemTemplate; // 0x108(0x08)
	bool bAutoActivate; // 0x110(0x01)
	bool bReactivate; // 0x111(0x01)
	char pad_112[0x6]; // 0x112(0x06)
	struct UUIParticleComponent* WorldParticleComponent; // 0x118(0x08)
	struct AActor* WorldParticleActor; // 0x120(0x08)
	char pad_128[0x10]; // 0x128(0x10)

	void SetReactivate(bool bActivateAndReset); // Function UIParticleSystem.ParticleSystemWidget.SetReactivate // (Final|Native|Public|BlueprintCallable) // @ game+0xf71d00
	struct UParticleSystemComponent* GetParticleComponent(); // Function UIParticleSystem.ParticleSystemWidget.GetParticleComponent // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xf71cd0
	void ActivateParticles(bool bActive, bool bReset); // Function UIParticleSystem.ParticleSystemWidget.ActivateParticles // (Final|Native|Public|BlueprintCallable) // @ game+0xf71c00
};

// Class UIParticleSystem.UIParticleComponent
// Size: 0x6a0 (Inherited: 0x6a0)
struct UUIParticleComponent : UParticleSystemComponent {
};

// Class UIParticleSystem.UIParticleActor
// Size: 0x220 (Inherited: 0x220)
struct AUIParticleActor : AActor {
};

