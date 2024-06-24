//////////////////////////////// TArray ////////////////////////////////////

// TArray: Dynamic array similar to std::vector in C++
TArray<int32> IntegerArray;

// Add elements: Add elements to the array
IntegerArray.Add(1);
IntegerArray.Add(2);
IntegerArray.Add(3);

// Remove elements: Remove elements by index
IntegerArray.RemoveAt(1);

// Update elements: Update an element by index
IntegerArray[0] = 10;

// Iterate: Iterate over elements using range-based for loop
for (int32 Element : IntegerArray)
{
    // Print value
    UE_LOG(LogTemp, Log, TEXT("Element: %d"), Element);
}

// Sorting: Sort elements in ascending order
IntegerArray.Sort([](const int32& A, const int32& B) {
    return A < B;
});

// Check capacity & increase: Check number of elements and resize if needed
if (IntegerArray.Num() < 10)
{
    IntegerArray.SetNum(10); // Increase capacity
    UE_Log(TempLog, Warning,TEXT("Size: "));
}

//////////////////////////////// TMap ////////////////////////////////////

// TMap: Associative container for key-value pairs
TMap<FString, float> FloatMap;

// Add elements: Add key-value pairs
FloatMap.Add(TEXT("Key1"), 1.5f);
FloatMap.Add(TEXT("Key2"), 3.0f);

// Remove elements: Remove element by key
FloatMap.Remove(TEXT("Key1"));

// Update elements: Update an existing value
FloatMap.FindOrAdd(TEXT("Key2")) = 4.0f;

// Iterate: Iterate over key-value pairs
for (auto& Pair : FloatMap)
{
    FString Key = Pair.Key;
    float Value = Pair.Value;
    // Print key-value pair
    UE_LOG(LogTemp, Log, TEXT("Key: %s, Value: %f"), *Key, Value);
}

// Sorting: TMap doesn't have an inherent order, sorting isn't applicable

// Check capacity: Capacity is managed dynamically, no explicit capacity check

// Find: Find value by key
float* FoundValue = FloatMap.Find(TEXT("Key2"));
if (FoundValue)
{
    UE_LOG(LogTemp, Log, TEXT("Found Value: %f"), *FoundValue);
}

// Contains: Check if a key exists in the map
if (FloatMap.Contains(TEXT("Key2")))
{
    UE_LOG(LogTemp, Log, TEXT("Key 'Key2' exists in the map"));
}

//////////////////////////////// TSet ////////////////////////////////////

// TSet: Unordered set of unique elements
TSet<int32> IntegerSet;

// Add elements: Add elements to the set
IntegerSet.Add(1);
IntegerSet.Add(2);
IntegerSet.Add(3);

// Remove elements: Remove element by value
IntegerSet.Remove(2);

// Update elements: Not applicable, elements are unique

// Iterate: Iterate over elements using range-based for loop
for (int32 Element : IntegerSet)
{
    // Print value
    UE_LOG(LogTemp, Log, TEXT("Element in Set: %d"), Element);
}

// Sorting: TSet doesn't have an inherent order, sorting isn't applicable

// Check capacity & increase: Capacity is managed dynamically, no explicit capacity check

// Find: Check if an element exists in the set
if (IntegerSet.Contains(3))
{
    UE_LOG(LogTemp, Log, TEXT("Element '3' exists in the set"));
}

// Contains: Check if an element exists in the set (same as Find for TSet)

/////////////////////////////////////////WITH DATA TABLE ///////////////////////////////////////////////////


#include "CoreMinimal.h"
#include "Engine/DataTable.h" // Include the DataTable structure

USTRUCT(BlueprintType)
struct QUESTSYSTEM_API FQuestTable : public FTableRowBase
{
	GENERATED_BODY()

public:
	// Quest name 
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Quest")
	FString Name;

	// Quest description 
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Quest")
	FString Description;

	// Is the quest completed? 
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Quest")
	bool bIsCompleted;

	// Quest objectives 
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Quest")
	TArray<FString> Objectives;

	// Is it a timed quest? (bool)
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Quest")
	bool bIsTimed;

	// Time limit for timed quests (float)
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Quest", meta = (EditCondition = "bIsTimed"))
	float TimeLimit;

	// Default constructor
	FQuestTable()
		: Name(TEXT("Default Quest")), Description(TEXT("Default Description")), bIsCompleted(false), bIsTimed(false), TimeLimit(0.0f) {}
};

                                //////////////////////////////// ARRAY , SET, MAP
//////////////////////////////// TArray<FQuestTable> ActiveQuests; //////////////////////////////////

// ActiveQuests: Dynamic array of FQuestTable structs
TArray<FQuestTable> ActiveQuests;

// Add elements: Add FQuestTable elements to the array
FQuestTable Quest1;
Quest1.Name = TEXT("Quest1");
Quest1.Description = TEXT("First quest description");
ActiveQuests.Add(Quest1);

FQuestTable Quest2;
Quest2.Name = TEXT("Quest2");
Quest2.Description = TEXT("Second quest description");
ActiveQuests.Add(Quest2);

// Remove elements: Remove elements by index
ActiveQuests.RemoveAt(0);

// Update elements: Update an element by index ,  '0' because it is now first element i.e ActiveQuests.RemoveAt(0);
ActiveQuests[0].Description = TEXT("Updated description for Quest2");

// Iterate: Iterate over elements using range-based for loop
for (const FQuestTable& Quest : ActiveQuests)
{
    // Print value
    UE_LOG(LogTemp, Log, TEXT("Quest Name: %s, Description: %s"), *Quest.Name, *Quest.Description);
}

// Sorting: Sort elements in ascending order based on Name (example sorting)
ActiveQuests.Sort([](const FQuestTable& A, const FQuestTable& B) {
    return A.Name.CompareTo(B.Name) < 0;
});

// Check capacity & increase: Check number of elements and resize if needed
if (ActiveQuests.Num() < 10)
{
    ActiveQuests.SetNum(10); // Increase capacity
}

//////////////////////////////// TMap<FString, FQuestTable> QuestCache; //////////////////////////////////

// QuestCache: Associative container mapping FString keys to FQuestTable values
TMap<FString, FQuestTable> QuestCache;

// Add elements: Add key-value pairs
FQuestTable QuestA;
QuestA.Name = TEXT("QuestA");
QuestA.Description = TEXT("Description for QuestA");
QuestCache.Add(TEXT("KeyA"), QuestA);

FQuestTable QuestB;
QuestB.Name = TEXT("QuestB");
QuestB.Description = TEXT("Description for QuestB");
QuestCache.Add(TEXT("KeyB"), QuestB);

// Remove elements: Remove element by key
QuestCache.Remove(TEXT("KeyA"));

// Update elements: Update an existing value
if (FQuestTable* FoundQuest = QuestCache.Find(TEXT("KeyB")))
{
    FoundQuest->Description = TEXT("Updated description for QuestB");
}

// Iterate: Iterate over key-value pairs
for (auto& Pair : QuestCache)
{
    FString Key = Pair.Key;
    FQuestTable& Quest = Pair.Value;
    // Print key-value pair
    UE_LOG(LogTemp, Log, TEXT("Key: %s, Quest Name: %s, Description: %s"), *Key, *Quest.Name, *Quest.Description);
}

// Sorting: TMap doesn't have an inherent order, sorting isn't applicable

// Check capacity: Capacity is managed dynamically, no explicit capacity check

// Find: Find value by key
if (FQuestTable* FoundQuest = QuestCache.Find(TEXT("KeyB")))
{
    UE_LOG(LogTemp, Log, TEXT("Found Quest: %s"), *FoundQuest->Name);
}

// Contains: Check if a key exists in the map
if (QuestCache.Contains(TEXT("KeyB")))
{
    UE_LOG(LogTemp, Log, TEXT("Key 'KeyB' exists in the map"));
}

//////////////////////////////// TSet<FQuestTable> QuestSet; //////////////////////////////////

// QuestSet: Unordered set of unique FQuestTable elements
TSet<FQuestTable> QuestSet;

// Add elements: Add FQuestTable elements to the set
FQuestTable Quest1;
Quest1.Name = TEXT("Quest1");
Quest1.Description = TEXT("First quest description");
QuestSet.Add(Quest1);

FQuestTable Quest2;
Quest2.Name = TEXT("Quest2");
Quest2.Description = TEXT("Second quest description");
QuestSet.Add(Quest2);

// Remove elements: Remove element by value
QuestSet.Remove(Quest1);

// Update elements: Not applicable, elements are unique in the set

// Iterate: Iterate over elements using range-based for loop
for (const FQuestTable& Quest : QuestSet)
{
    // Print value
    UE_LOG(LogTemp, Log, TEXT("Quest Name: %s, Description: %s"), *Quest.Name, *Quest.Description);
}

// Sorting: TSet doesn't have an inherent order, sorting isn't applicable

// Check capacity & increase: Capacity is managed dynamically, no explicit capacity check

// Find: Check if an element exists in the set
if (QuestSet.Contains(Quest2))
{
    UE_LOG(LogTemp, Log, TEXT("Quest2 exists in the set"));
}

// Contains: Check if an element exists in the set (same as Find for TSet)



////////////////////////////////////////////////////////////////////////////////////////////

/* Certainly! Let's merge everything together and provide a comprehensive overview of using UDataTable and related functionalities in Unreal Engine, focusing on UQuestManager as an example.
Introduction to UDataTable in Unreal Engine
In Unreal Engine, UDataTable is a versatile tool for managing structured data such as game constants, configurations, and quest information. It allows for efficient data retrieval and manipulation both in C++ and Blueprints (BP).
1. Table Pointer Assignment in C++
To utilize a UDataTable in C++, you typically declare a pointer to the table and load it from an asset in the Unreal Editor:


UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "DataTable")
class UDataTable* QuestDataTable;
    • QuestDataTable is a pointer that references a UDataTable asset.
    • EditAnywhere allows assignment from Unreal Editor.
    • BlueprintReadOnly permits read-only access from Blueprints.
2. Macro for Assigning in Blueprint
To expose the UDataTable pointer to Blueprints for easy manipulation, use the UDataTableFunctionLibrary and a macro to assign the table:
 */

UDataTableFunctionLibrary::Get().GetDataTableRowNames(QuestDataTable, RowNames);

 // Table data  -------------------------------             -----------------------------------
 


//

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "QuestTable.h" // Include the QuestTable structure
#include "TimerManager.h"
#include "QuestManager.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FQuestUpdatedDelegate, const FQuestTable&, UpdatedQuest);

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class QUESTSYSTEM_API UQuestManager : public UActorComponent
{
    GENERATED_BODY()

public: 
    UQuestManager();

protected:
    virtual void BeginPlay() override;

public: 
    virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

    // Add a new quest to ActiveQuests
    void AddQuest(const FQuestTable& NewQuest);

    // Complete a quest by name
    void CompleteQuest(const FString& QuestName);

    // Load quests from DataTable and add them to ActiveQuests
    void AddAllQuestsFromDataTable();

    // Update the current quest based on ActiveQuests
    void UpdateCurrentQuest();

    // Start a timed quest
    void StartTimedQuest(const FString& QuestName);

    // Get current quest data (const accessor)
    UFUNCTION(BlueprintCallable, Category = "Quests")
    const FQuestTable* GetCurrentQuestData() const { return &CurrentQuest; }

    // Delegate broadcast when quest is updated
    UPROPERTY(BlueprintAssignable, Category = "Quests")
    FQuestUpdatedDelegate OnQuestUpdated;

protected:
    // Current active quests
    TArray<FQuestTable> ActiveQuests;

    // Cached quest data for quick access
    TMap<FString, FQuestTable> QuestCache;

    // Current active quest
    FQuestTable CurrentQuest;

    // Name of save slot for quest progress
    FString SaveSlotName;

    // Handle for managing timed quests
    FTimerHandle TimerHandle;

    // Cache quest data for quick access
    void CacheQuest(const FQuestTable& Quest);

    // Retrieve cached quest by name
    FQuestTable* GetCachedQuest(const FString& QuestName);

    // Callback for timed quest completion
    void OnTimedQuestCompleted();

    // Update quest cache
    void UpdateCache();

    // Save current quest progress
    void SaveQuestProgress();

    // Load saved quest progress
    void LoadQuestProgress();

    // Load the first quest from DataTable
    void LoadFirstQuestFromDataTable();
};

//////////////////////////////// TArray ////////////////////////////////////

// Current active quests
TArray<FQuestTable> ActiveQuests;

// Common Operations and Use Cases:
// Adding Elements: You can add new elements to the array using Add() or Emplace() methods.
// Example:
ActiveQuests.Add(NewQuest);

// Accessing Elements: Access elements by index using operator[] or Get() method.
// Example:
FQuestTable Quest = ActiveQuests[0];

// Iterating through Elements: Iterate over the array using range-based for loops or iterators.
// Example:
for (const FQuestTable& Quest : ActiveQuests)
{
    // Process each quest

}

// Removing Elements: Remove elements by index or value using Remove() or RemoveAt() methods.
// Example:
ActiveQuests.RemoveAt(0);

// Sorting: Sort elements using Sort() method.
// Example:
ActiveQuests.Sort([](const FQuestTable& A, const FQuestTable& B) {
    return A.Name.CompareTo(B.Name) < 0;
});

// Size and Capacity: Check the number of elements with Num() and resize the array with SetNum().
// Example:
int32 NumQuests = ActiveQuests.Num();

//////////////////////////////// TMap ////////////////////////////////////

// Cached quest data for quick access
TMap<FString, FQuestTable> QuestCache;

// Common Operations and Use Cases:
// Adding Elements: Add key-value pairs using Add() or Emplace() methods.
// Example:
QuestCache.Add(Quest.Name, Quest);

// Accessing Elements: Retrieve values by key using Find() or operator[].
// Example:
FQuestTable* CachedQuest = QuestCache.Find(QuestName);
if (CachedQuest)
{
    // Process cached quest
}

// Iterating through Elements: Iterate over key-value pairs using range-based for loops or iterators.
// Example:
for (auto& Pair : QuestCache)
{
    FString QuestName = Pair.Key;
    FQuestTable& Quest = Pair.Value;
    // Process each quest
}

// Removing Elements: Remove elements by key using Remove() or RemoveAt().
// Example:
QuestCache.Remove(QuestName);

// Checking Existence: Check if a key exists in the map using Contains().
// Example:
if (QuestCache.Contains(QuestName))
{
    // Key exists
}

// Size: Get the number of key-value pairs with Num().
// Example:
int32 NumCachedQuests = QuestCache.Num();

// Use Cases in UQuestManager:
// - Cache for Quick Access: TMap is used as QuestCache to store quests by their names (FString).
//   This allows fast lookup and retrieval of quests based on their names, crucial for quickly accessing quest data during gameplay operations.
// - Active Quest Storage: TArray (ActiveQuests) is used to store all currently active quests (FQuestTable).
//   This array dynamically grows and shrinks as quests are added or completed, providing a flexible container for managing quest data.

//////////////////////////////////////////////////////////////////////////////

void UQuestManager::SaveQuestProgress()
{
    UQuestSaveGame* SaveGameInstance = Cast<UQuestSaveGame>(UGameplayStatics::CreateSaveGameObject(UQuestSaveGame::StaticClass()));
    if (SaveGameInstance)
    {
        SaveGameInstance->SavedQuests = ActiveQuests;
        SaveGameInstance->CurrentQuestName = CurrentQuest.Name;
        SaveGameInstance->bCanChangeQuest = CurrentQuest.bIsCompleted;

        UGameplayStatics::SaveGameToSlot(SaveGameInstance, SaveSlotName, 0);
        UE_LOG(LogTemp, Warning, TEXT("Quest progress saved."));
    }
}

void UQuestManager::LoadQuestProgress()
{
    UQuestSaveGame* LoadGameInstance = Cast<UQuestSaveGame>(UGameplayStatics::LoadGameFromSlot(SaveSlotName, 0));
    if (LoadGameInstance)
    {
        ActiveQuests = LoadGameInstance->SavedQuests;
        FQuestTable* LoadedQuest = GetCachedQuest(LoadGameInstance->CurrentQuestName);
        if (LoadedQuest)
        {
            CurrentQuest = *LoadedQuest;
            CurrentQuest.bIsCompleted = LoadGameInstance->bCanChangeQuest;
        }
        UE_LOG(LogTemp, Warning, TEXT("Quest progress loaded."));
    }
    else
    {
        AddAllQuestsFromDataTable();
    }
}
/*
4. Integration with Widgets
Updating UI widgets (QuestWidget) based on current quest data (GetCurrentQuestData) enhances player experience:
*/
const FQuestTable* UQuestManager::GetCurrentQuestData() const
{
    return &CurrentQuest;
}

// Example usage in Blueprint Graph
const FQuestTable* CurrentQuest = QuestManager->GetCurrentQuestData();
if (CurrentQuest)
{
    // Update the quest widget
    QuestWidget->UpdateQuestList(*CurrentQuest);
}

/*
5. Timer Management
Handling timed quests using Unreal's timer system (FTimerManager) in UQuestManager:
 */

void UQuestManager::StartTimedQuest(const FString& QuestName)
{
    FQuestTable* Quest = GetCachedQuest(QuestName);
    if (Quest && Quest->bIsTimed)
    {
        GetWorld()->GetTimerManager().SetTimer(TimerHandle, this, &UQuestManager::OnTimedQuestCompleted, Quest->TimeLimit, false);
    }
}

void UQuestManager::OnTimedQuestCompleted()
{
    UE_LOG(LogTemp, Warning, TEXT("Timed Quest Completed: %s"), *CurrentQuest.Name);
    CompleteQuest(CurrentQuest.Name);
}
/*
6. Caching Mechanism in UQuestManager
 In the UQuestManager class, the QuestCache is utilized to store quest data for quick access and manipulation during gameplay. Here’s a breakdown of each function involved in the caching mechanism:
1. CacheQuest Function
*/

void UQuestManager::CacheQuest(const FQuestTable& Quest)
{
    QuestCache.Add(Quest.Name, Quest);
}
/* 
    • Purpose: CacheQuest is responsible for adding a quest (FQuestTable) to the QuestCache.
    • Parameters:
        ◦ Quest: Reference to the FQuestTable struct representing the quest to be cached.
    • Functionality:
        ◦ Adds the quest to QuestCache using the quest's name (Quest.Name) as the key.
        ◦ This allows quick lookup and retrieval of quest data by name from QuestCache.
2. GetCachedQuest Function
 */
FQuestTable* UQuestManager::GetCachedQuest(const FString& QuestName)
{
    return QuestCache.Find(QuestName);
}
/*   
    • Purpose: GetCachedQuest retrieves a cached quest (FQuestTable) from QuestCache based on its name.
    • Parameters:
        ◦ QuestName: Name of the quest to retrieve.
    • Return Type: Pointer to the FQuestTable if found, otherwise nullptr.
    • Functionality:
        ◦ Uses QuestName as the key to search for the quest in QuestCache.
        ◦ Returns a pointer to the quest data if found, allowing direct access and modification of quest properties.
3. UpdateCache Function

*/
 
void UQuestManager::UpdateCache()
{
    QuestCache.Empty();
    for (const FQuestTable& Quest : ActiveQuests)
    {
        CacheQuest(Quest);
    }
}
/*

    • Purpose: UpdateCache updates the QuestCache with the current state of ActiveQuests.
    • Functionality:
        ◦ Clears (Empty()) the QuestCache to ensure it contains the latest quest data.
        ◦ Iterates through each quest in ActiveQuests and calls CacheQuest to add them to QuestCache.
        ◦ This method ensures that QuestCache remains synchronized with ActiveQuests, reflecting any changes made to active quests.
How to Use the Cache Mechanism
Adding Quests to Cache
When you add a new quest to ActiveQuests, ensure to update the cache using CacheQuest:
 
*/

void UQuestManager::AddQuest(const FQuestTable& NewQuest)
{
    ActiveQuests.Add(NewQuest);
    CacheQuest(NewQuest);
    // Other logic...
}

/*
Retrieving Quests from Cache
To retrieve a quest by name efficiently during gameplay:
*/
 

FQuestTable* LoadedQuest = GetCachedQuest(QuestName);
if (LoadedQuest)
{
    // Modify or use LoadedQuest as needed...
}

// Updating Cache Periodically
// If ActiveQuests can change dynamically (e.g., quests added, completed, or removed during gameplay), 
// call UpdateCache to keep QuestCache updated:
 
void UQuestManager::UpdateCurrentQuest()
{
    // Logic to update current quest...
    UpdateCache();
}

/* 
Benefits of Caching:----
    • Performance: Accessing quests through QuestCache is faster than searching through ActiveQuests repeatedly,
                   especially in scenarios requiring frequent data access.
    • Simplified Logic: Allows for cleaner and more readable code by separating data retrieval 
                       (from QuestCache) and manipulation (in ActiveQuests).
    • Consistency: Ensures that quest data accessed via QuestCache is always up-to-date with the 
                   latest changes in ActiveQuests due to periodic updates through UpdateCache.
    */

//////////////////////////////////////////////////////////////////////
#include "QuestManager.h"
#include "QuestSaveGame.h"
#include "Kismet/GameplayStatics.h"

UQuestManager::UQuestManager()
{
    PrimaryComponentTick.bCanEverTick = true;
    SaveSlotName = TEXT("QuestSaveSlot");
} 
void UQuestManager::BeginPlay()
{
    Super::BeginPlay();
    // Load the saved quest progress when the game starts
    LoadQuestProgress();
}

void UQuestManager::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
    Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
    // Additional tick logic if needed
}

/////////////////////////////// Save Logic ///////////////////////////////

void UQuestManager::SaveQuestProgress()
{
    // Create a new instance of the save game object
    UQuestSaveGame* SaveGameInstance = Cast<UQuestSaveGame>(UGameplayStatics::CreateSaveGameObject(UQuestSaveGame::StaticClass()));
    
    if (SaveGameInstance)
    {
        // Save the active quests, current quest name, and completion status
        SaveGameInstance->SavedQuests = ActiveQuests;
        SaveGameInstance->CurrentQuestName = CurrentQuest.Name;
        SaveGameInstance->bCanChangeQuest = CurrentQuest.bIsCompleted;

        // Save the game instance to the specified slot
        UGameplayStatics::SaveGameToSlot(SaveGameInstance, SaveSlotName, 0);
        
        // Log a message indicating that quest progress has been saved
        UE_LOG(LogTemp, Warning, TEXT("Quest progress saved."));
    }
}

void UQuestManager::LoadQuestProgress()
{
    // Attempt to load the saved quest progress from the specified slot
    UQuestSaveGame* LoadGameInstance = Cast<UQuestSaveGame>(UGameplayStatics::LoadGameFromSlot(SaveSlotName, 0));
    
    if (LoadGameInstance)
    {
        // Restore active quests from the saved game instance
        ActiveQuests = LoadGameInstance->SavedQuests;
        
        // Retrieve the current quest from the cached data
        FQuestTable* LoadedQuest = GetCachedQuest(LoadGameInstance->CurrentQuestName);
        
        if (LoadedQuest)
        {
            // Update the current quest with the loaded data
            CurrentQuest = *LoadedQuest;
            CurrentQuest.bIsCompleted = LoadGameInstance->bCanChangeQuest;
        }
        
        // Log a message indicating that quest progress has been loaded
        UE_LOG(LogTemp, Warning, TEXT("Quest progress loaded."));
    }
    else
    {
        // If no saved game instance is found, load quests from the data table
        AddAllQuestsFromDataTable();
    }
}

/////////////////////////////// Cache Logic ///////////////////////////////

void UQuestManager::CacheQuest(const FQuestTable& Quest)
{
    // Add a quest to the cache for quick access by name
    QuestCache.Add(Quest.Name, Quest);
}

FQuestTable* UQuestManager::GetCachedQuest(const FString& QuestName)
{
    // Retrieve a quest from the cache by name
    return QuestCache.Find(QuestName);
}

void UQuestManager::UpdateCache()
{
    // Clear the quest cache
    QuestCache.Empty();
    
    // Update the cache with quests from the active quests array
    for (const FQuestTable& Quest : ActiveQuests)
    {
        CacheQuest(Quest);
    }
}

/////////////////////////////// Quest Logic ///////////////////////////////

void UQuestManager::AddQuest(const FQuestTable& NewQuest)
{
    // Add a new quest to the list of active quests
    ActiveQuests.Add(NewQuest);
    
    // Cache the newly added quest for quick access
    CacheQuest(NewQuest);
    
    // Update the current quest based on the added quest
    UpdateCurrentQuest();
    
    // Log a message indicating that a quest has been added
    UE_LOG(LogTemp, Warning, TEXT("Quest Added: %s"), *NewQuest.Name);
}

void UQuestManager::CompleteQuest(const FString& QuestName)
{
    // Mark a quest as completed based on its name
    for (FQuestTable& Quest : ActiveQuests)
    {
        if (Quest.Name == QuestName)
        {
            Quest.bIsCompleted = true;
            
            // Log a message indicating that a quest has been completed
            UE_LOG(LogTemp, Warning, TEXT("Quest Completed: %s"), *Quest.Name);
            
            break;
        }
    }
    
    // Update the current quest after completing a quest
    UpdateCurrentQuest();
}

void UQuestManager::AddAllQuestsFromDataTable()
{
    if (QuestDataTable)
    {
        static const FString ContextString(TEXT("QuestDataContext"));
        
        // Retrieve all row names from the data table
        TArray<FName> RowNames = QuestDataTable->GetRowNames();
        
        // Iterate through each row and add quests to the active quests list
        for (const FName& RowName : RowNames)
        {
            FQuestTable* Quest = QuestDataTable->FindRow<FQuestTable>(RowName, ContextString);
            
            if (Quest)
            {
                AddQuest(*Quest);
            }
        }
    }
    else
    {
        // Log an error if the quest data table is not assigned
        UE_LOG(LogTemp, Error, TEXT("QuestDataTable is not assigned."));
    }
    
    // Update the current quest list after adding quests from the data table
    UpdateCurrentQuest();
}

void UQuestManager::UpdateCurrentQuest()
{
    bool bFoundNextQuest = false;

    // Iterate through active quests to find the next quest that is not completed
    for (const FQuestTable& Quest : ActiveQuests)
    {
        if (!Quest.bIsCompleted)
        {
            if (!bFoundNextQuest || Quest.Name == CurrentQuest.Name)
            {
                // Update the current quest with the newly found quest
                CurrentQuest = Quest;
                
                // Broadcast an update that the current quest has changed
                OnQuestUpdated.Broadcast(CurrentQuest);
                
                // Set a timer for timed quests if applicable
                if (CurrentQuest.bIsTimed)
                {
                    GetWorld()->GetTimerManager().SetTimer(TimerHandle, this, &UQuestManager::OnTimedQuestCompleted, CurrentQuest.TimeLimit, false);
                }
                
                break;
            }
        }
    }
}

void UQuestManager::OnTimedQuestCompleted()
{
    // Handle timed quest completion logic
    UE_LOG(LogTemp, Warning, TEXT("Timed Quest Completed: %s"), *CurrentQuest.Name);
    CompleteQuest(CurrentQuest.Name);
}

void UQuestManager::StartTimedQuest(const FString& QuestName)
{
    // Start a timed quest by setting a timer for the specified quest
    FQuestTable* Quest = GetCachedQuest(QuestName);
    
    if (Quest && Quest->bIsTimed)
    {
        GetWorld()->GetTimerManager().SetTimer(TimerHandle, this, &UQuestManager::OnTimedQuestCompleted, Quest->TimeLimit, false);
    }
}

void UQuestManager::LoadFirstQuestFromDataTable()
{
    if (QuestDataTable)
    {
        static const FString ContextString(TEXT("QuestDataContext"));
        
        // Retrieve all row names from the data table
        TArray<FName> RowNames = QuestDataTable->GetRowNames();
        
        // Check if any quests are available in the data table
        if (RowNames.Num() > 0)
        {
            // Load the first quest from the data table
            FQuestTable* FirstQuest = QuestDataTable->FindRow<FQuestTable>(RowNames[0], ContextString);
            
            if (FirstQuest)
            {
                // Update the current quest with the first quest from the data table
                CurrentQuest = *FirstQuest;
                
                // Broadcast an update that the current quest has changed
                OnQuestUpdated.Broadcast(CurrentQuest);
            }
        }
        else
        {
            // Log an error if no quests are found in the data table
            UE_LOG(LogTemp, Error, TEXT("No quests found in QuestDataTable."));
        }
    }
    else
    {
        // Log an error if the quest data table is not assigned
        UE_LOG(LogTemp, Error, TEXT("QuestDataTable is not assigned."));
    }
}

/////////////////////////////////////////////////////////////////////////
// Conclusion : 
// Using UDataTable in Unreal Engine via UQuestManager demonstrates effective 
// data management for quests, integrating with UI updates, saving/loading progress, and handling timed events. 
// Understanding these concepts empowers developers to create dynamic and engaging gameplay experiences efficiently.
