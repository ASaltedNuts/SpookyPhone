#include "Camera.h"
#include "PhoneCamera.h"

#pragma region filters

void APhoneCamera::SwitchFilter(FilterType _new)
{
	//sets it to another filter.
	currentFilter = _new;

	//adjust camera options according to the currentFilter (tiny, staticyness, etc.)
	switch (currentFilter)
	{
	case NORMAL:
		break;
	case NIGHTVISION:
		break;
	case SPOOKY:
		break;
	default:
		break;
	}
}

#pragma endregion

#pragma region pictures

bool APhoneCamera::TakePicture()
{
	//move this object to the location and orientation of the player. 

	//set the frustum to take in what the phone camera sees. 

	//return briefly to the NORMAL filter --> ?? or do we ant them to be able to save it as spooky/darkvision as well? 
	//snap a screenshot, save it to a texture. 

	//save that texture into our vector of pictures. 

	//play a snapshot sound

	//return render target to phone. 
	return true;
}

texturePTR APhoneCamera::DisplayPicture(int _index)
{
	//display the picture at a given index on the phone. 

	//also display left/right arrows so the user can cycle through their pictures.

	//display delete button, allows deletion of current photograph.

	//play a swipe noise if swiped to left/right.

	return NULL;
}

bool APhoneCamera::DeletePicture(int _index)
{
	//play a noise and return false if there is no picture to delete.

	//removes a picture from the vector. 
	
	//displays next photograph in gallery if possible; if none exists, go to the previous one.

	//play a noise if needed.

	return true;
}

#pragma endregion

//KW 




