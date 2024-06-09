// Fill out your copyright notice in the Description page of Project Settings.


#include "MyArray.h"



// Sets default values
AMyArray::AMyArray()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	
	 
	 
	
}

// Called when the game starts or when spawned
void AMyArray::BeginPlay()
{
	Super::BeginPlay();


	// StrArr.Add("Hello");
	// StrArr.Add("World of ");
	//
	// FString Arr[] = { "Unreal", "Engine" };
	// StrArr.Append(Arr );
	// StrArr.AddUnique(TEXT("!!!")  );
	// StrArr.Insert(TEXT("Brave"), 1);
	//
	// StrArr2.SetNum(10);
	// StrArr2.Add("Last of US");
	// StrArr2.Add("Doom Day");
	//
	//
	//
	// FString JoinedStr;
	// for (auto& ele: StrArr)
	// {
	// 	JoinedStr += ele + " ";
	// }
	//
	// UE_LOG(LogTemp, Warning, TEXT("Elem: %s"), *JoinedStr); 
	//
	// for (const FString& Element: StrArr)
	// {
	// 	UE_LOG(LogTemp, Warning, TEXT("Element: %s"),  *Element);
	// }
	//
	// // for (const FString& Ele: StrArr2)
	// // {
	// // 	UE_LOG(LogTemp,Warning, TEXT("Element 2 list: %s") , *Ele);
	// // }
	//
	// // Sort the array and log each element
	// StrArr.HeapSort();
	// for (const FString& Element : StrArr)
	// {
	// 	UE_LOG(LogTemp, Warning, TEXT("Element:------		 %s"), *Element);
	// }
	//
	//
	// int32 Count = StrArr.Num();
	// UE_LOG(LogTemp, Warning, TEXT("Element:>>>>   %d"), Count);
	//
	// bool bValid0  = StrArr.IsValidIndex(0);
	// bool bValid1  = StrArr.IsValidIndex(1);
	// UE_LOG(LogTemp, Warning, TEXT("IsValidIndex: 0 %s 1 %s"), bValid0 ? TEXT("True") : TEXT("False"), bValid1 ? TEXT("True") : TEXT("False"));
	//
	// int32 Index2     = StrArr.Find(TEXT("Hello"));
	// int32 Index3     = StrArr.Find(TEXT("World"));
	// UE_LOG(LogTemp, Warning, TEXT("Find: Hello index %d World  index %d"), Index2, Index3);
	//
	// StrArr.Remove(TEXT("Hello"));
	// StrArr.Remove(TEXT("World"));
	// UE_LOG(LogTemp, Warning, TEXT("Remove: Hello World"));
	//
	// for (const FString& Element : StrArr)
	// {
	// 	UE_LOG(LogTemp, Warning, TEXT("Element:------		 %s"), *Element);
	// }
 //  
	
}



// Called every frame
void AMyArray::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

