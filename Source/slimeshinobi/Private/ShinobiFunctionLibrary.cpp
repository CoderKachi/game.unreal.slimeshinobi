// Fill out your copyright notice in the Description page of Project Settings.


#include "ShinobiFunctionLibrary.h"

AActor* UShinobiFunctionLibrary::CloneActor(AActor* OriginalActor, UObject* Outer)
{
    if (!OriginalActor) return nullptr;

    UObject* UseOuter = Outer ? Outer : OriginalActor->GetOuter();

    // Duplicate the actor in memory
    AActor* NewActor = DuplicateObject(OriginalActor, UseOuter);
    if (!NewActor) return nullptr;

    // Get the world and spawn the actor
    UWorld* World = OriginalActor->GetWorld();
    if (!World) return nullptr;

    FActorSpawnParameters SpawnParams;
    SpawnParams.Template = NewActor;  // Use duplicated actor as a template
    NewActor = World->SpawnActor<AActor>(OriginalActor->GetClass(), OriginalActor->GetTransform(), SpawnParams);

    return NewActor;
}
