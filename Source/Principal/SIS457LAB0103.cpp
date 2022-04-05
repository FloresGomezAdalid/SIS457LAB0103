// Fill out your copyright notice in the Description page of Project Settings.


#include "SIS457LAB0103.h"

// Sets default values for this component's properties
USIS457LAB0103::USIS457LAB0103()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void USIS457LAB0103::BeginPlay()
{
	Super::BeginPlay();
	UE_LOG(LogTemp, Warning, TEXT("                  Biografia                      "));
	UE_LOG(LogTemp, Warning, TEXT("             Adalid Flores Gomez                 "));
	UE_LOG(LogTemp, Warning, TEXT("Mi nombre es Adalid Flores Gomez, tengo 19 años,"));
	UE_LOG(LogTemp, Warning, TEXT("naci el 10 de Enero de 2003 en la ciudad de Potosi"));
	UE_LOG(LogTemp, Warning, TEXT("Vivo con mis padres Mayra Gomez , Braulio Flores"));
	UE_LOG(LogTemp, Warning, TEXT("y mi hermana Valeria de 11 años."));
	UE_LOG(LogTemp, Warning, TEXT("De religion catolica, cumplí los 3 primeros"));
	UE_LOG(LogTemp, Warning, TEXT("sacramentos, actualmente vivo en la Ciudad de"));
	UE_LOG(LogTemp, Warning, TEXT("Sucre, el nivel inicial lo realicé en el kinder"));
	UE_LOG(LogTemp, Warning, TEXT("Jaime Mendoza de la ciudad de Potosi, el nivel"));
	UE_LOG(LogTemp, Warning, TEXT("primario lo realice en la escuela Don Bosco de la"));
	UE_LOG(LogTemp, Warning, TEXT("ciudad de Potosi, el nivel secundario lo realice en"));
	UE_LOG(LogTemp, Warning, TEXT("el colegio Nacional Junin de la ciudad de Sucre, tengo"));
	UE_LOG(LogTemp, Warning, TEXT("un título en tecnico medio en electricidad."));
	UE_LOG(LogTemp, Warning, TEXT("Estudio la carrera de Ingenieria de Sistemas, mis"));
	UE_LOG(LogTemp, Warning, TEXT("pasatiempos son jugar videojuegos ,ayudar  a mi"));
	UE_LOG(LogTemp, Warning, TEXT("familia en casa, mi color favorito es el color negro."));
	UE_LOG(LogTemp, Warning, TEXT("No realizo ningun deporte debido a un  accidente"));
	UE_LOG(LogTemp, Warning, TEXT("que tuve hace unos años atras, donde fue afectado mi"));
	UE_LOG(LogTemp, Warning, TEXT("pie izquierdo, mi juego favorito es Minecraft, uno de"));
	UE_LOG(LogTemp, Warning, TEXT("mis sueños es poder programar mods y videjuegos"));
	// ...
	
}


// Called every frame
void USIS457LAB0103::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

