// CameraGameMode.cpp
#include "CameraGameMode.h"
#include "SplineCameraActor.h"

ACameraGameMode::ACameraGameMode()
{
    // Set the default pawn class to be the spline camera actor
    DefaultPawnClass = ASplineCameraActor::StaticClass();
}
