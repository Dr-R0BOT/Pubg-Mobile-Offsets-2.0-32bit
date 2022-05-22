#pragma once

#include "Includes.h"

//int lib-UE4-H = Ultra::ReadMemoryEx<int>(0xE0C36E8);
   //DWORD GName = Ultra::ReadMemoryEx<DWORD>(lib-UE4-H + Offsets::Gname) + 0x80;           
   //DWORD GWorld = Ultra::ReadMemoryEx<DWORD>(lib-UE4-H + Offsets::GWorld) + 0x3C;
// 
// 
// 
//                            OR USE
// 
// 
// 
// 
//Offsets::uWorld = Memory::dGet(Offsets::viewWorldBase + 114324) + 60;
//Offsets::gNames = Memory::dGet(Offsets::viewWorldBase - 3036808) + 128;



namespace Offsets
{
	DWORD Gname = 0x7827A58;
	DWORD GWorld = 0x7B28F74;
	const DWORD bDead = 0x9e0;
	const DWORD PersistentLevel = 0x20;
	const DWORD NetDriver = 0x24;
	const DWORD ServerConnection = 0x60;
	const DWORD PlayerController = 0x20;
	const DWORD AcknowledgedPawn = 0x350;
	const DWORD EntityList = 0x7C;
	const DWORD EntityCount = EntityList + 4;
	const DWORD gameInstance = 0x24;
	const DWORD playerController = 96;
	const DWORD	playerCarry = 0x20;
	const DWORD RootComponent = 0x16c;
	const DWORD CurrentStates = 0xb08;
	const DWORD TeamId = 0x69c;
	const DWORD PoseState = 0xfa0;
	const DWORD IsBot = 0x714;
	const DWORD Name = 0x668;
	const DWORD Status = 0xab0;
	const DWORD Nation = 0x674;
	const DWORD Health = 0x9a4;
	const DWORD HealthMax = 0x9a8;
	const int weaponOffset = 6572;
	const int ShootWeapon = 3532;
	const DWORD CurrWeapon = 0x19ac;
	const DWORD CurBulletNumInClip =
	const DWORD CurMaxBulletNumInOneClip = 0xabc;
	const DWORD ScopeFov = 0x127c;
	const DWORD itemBase = 0x684;
	const DWORD boxItemsCount = 0x69c;
	const DWORD PickUpDataList = 0x684;
	const DWORD CharacterMovement = 0x344;
	const DWORD LastUpdateVelocity = 0x250;
	const DWORD Velocity = 0xc8;
	const DWORD RelativeLocation = 0x118;
	const DWORD RelativeRotation = 0x124;
	const DWORD Position = 0x150;
	const DWORD IsVisible = 0x1bc;
	const DWORD Mesh = 0x340;
	const DWORD BodyAddv = 0x140;
	const DWORD MinLOD = 0x5e8;
	const DWORD PlayerCameraManager = 0x360;
	const DWORD CameraCache = 0x370;
	const DWORD POV = 0x10;
	const DWORD Location = 0x0;
	const DWORD Rotation = 0x18;
	const DWORD FOV = 0x24;
	const DWORD CurrentReloadWeapon = 0x1e50;
	const DWORD CharacterOverrideAttrs = 0x2220;
	const DWORD ParachuteComponent = 0xf80;
	const DWORD AccessoriesVRecoilFactor = 0x858;
	const DWORD AccessoriesHRecoilFactor = 0x85c;
	const DWORD AccessoriesRecoveryFactor = 0x860;
	const DWORD bEnablePlayerPickUpAnim = 0x12e0;
	const DWORD GameStateBase = 0x128;
	const DWORD AlivePlayerNum = 0x79c;
	const DWORD ElapsedTime = 0x340;
	const DWORD AliveTeamNum = 0x7a0;
	const DWORD PlayerNum = 0x53c;
	const DWORD CurCircleWave = 0x720;
	const DWORD GameModeID = 0xb28;
	const DWORD IsFPPGameMode = 0x680;
	const DWORD ExtraShootInterval = 0x430;
	const DWORD CharacterParachuteComponent = 0xe88;
	const DWORD CurrentFallSpeed = 0x290;
	const DWORD BulletFireSpeed = 0x404;
	const DWORD ShootInterval = 0x428;
	const DWORD ShootWeaponEntity = 0xbb0;
	const DWORD ShotGunVerticalSpread = 0x8ac;
	const DWORD ShotGunHorizontalSpread = 0x8b0;
	const DWORD GameDeviationFactor = 0x8b4;
	const DWORD RecoilKickADS = 0x960;
	const DWORD AnimationKick = 0x978;
	const DWORD LaunchGravityScale = 0x2f0;
	const DWORD SwitchWeaponSpeedScale = 0x1ac0;
	const DWORD Controller = 0x31c;
	const DWORD ControlRotation = 0x318;
	const DWORD VehicleCommon = 0x6dc;
	const DWORD HP = 0x1a8;
	const DWORD HPMax = 0x1a4;
	const DWORD FuelMax = 0x1bc;
	const DWORD Fuel = 0x1c0;
}