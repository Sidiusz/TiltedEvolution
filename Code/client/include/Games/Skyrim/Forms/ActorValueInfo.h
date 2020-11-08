#pragma once

#include <Forms/TESForm.h>
#include <Components/TESFullName.h>

struct ActorValueInfo : TESForm
{
    enum
    {
        kAggression = 0,
        kConfidence = 1,
        kEnergy = 2,
        kMorality = 3,
        kMood = 4,
        kAssistance = 5,
        kOneHanded = 6,
        kTwoHanded = 7,
        kMarksman = 8,
        kBlock = 9,
        kSmithing = 10,
        kHeavyArmor = 11,
        kLightArmor = 12,
        kPickpocket = 13,
        kLockpicking = 14,
        kSneak = 15,
        kAlchemy = 16,
        kSpeechcraft = 17,
        kAlteration = 18,
        kConjuration = 19,
        kDestruction = 20,
        kIllusion = 21,
        kRestoration = 22,
        kEnchanting = 23,
        kHealth = 24,
        kMagicka = 25,
        kStamina = 26,
        kHealRate = 27,
        kMagickaRate = 28,
        kStaminaRate = 29,
        kSpeedMult = 30,
        kInventoryWeight = 31,
        kCarryWeight = 32,
        kCritChance = 33,
        kMeleeDamage = 34,
        kUnarmedDamage = 35,
        kMass = 36,
        kVoicePoints = 37,
        kVoiceRate = 38,
        kDamageResist = 39,
        kPoisonResist = 40,
        kFireResist = 41,
        kElectricResist = 42,
        kFrostResist = 43,
        kMagicResist = 44,
        kDiseaseResist = 45,
        kPerceptionCondition = 46,
        kEnduranceCondition = 47,
        kLeftAttackCondition = 48,
        kRightAttackCondition = 49,
        kLeftMobilityCondition = 50,
        kRightMobilityCondition = 51,
        kBrainCondition = 52,
        kParalysis = 53,
        kInvisibility = 54,
        kNightEye = 55,
        kDetectLifeRange = 56,
        kWaterBreathing = 57,
        kWaterWalking = 58,
        kIgnoreCrippledLimbs = 59,
        kFame = 60,
        kInfamy = 61,
        kJumpingBonus = 62,
        kWardPower = 63,
        kRightItemCharge = 64,
        kArmorPerks = 65,
        kShieldPerks = 66,
        kWardDeflection = 67,
        kVariable01 = 68,
        kVariable02 = 69,
        kVariable03 = 70,
        kVariable04 = 71,
        kVariable05 = 72,
        kVariable06 = 73,
        kVariable07 = 74,
        kVariable08 = 75,
        kVariable09 = 76,
        kVariable10 = 77,
        kBowSpeedBonus = 78,
        kFavorActive = 79,
        kFavorsPerDay = 80,
        kFavorsPerDayTimer = 81,
        kLeftItemCharge = 82,
        kAbsorbChance = 83,
        kBlindness = 84,
        kWeaponSpeedMult = 85,
        kShoutRecoveryMult = 86,
        kBowStaggerBonus = 87,
        kTelekinesis = 88,
        kFavorPointsBonus = 89,
        kLastBribedIntimidated = 90,
        kLastFlattered = 91,
        kMovementNoiseMult = 92,
        kBypassVendorStolenCheck = 93,
        kBypassVendorKeywordCheck = 94,
        kWaitingForPlayer = 95,
        kOneHandedMod = 96,
        kTwoHandedMod = 97,
        kMarksmanMod = 98,
        kBlockMod = 99,
        kSmithingMod = 100,
        kHeavyArmorMod = 101,
        kLightArmorMod = 102,
        kPickPocketMod = 103,
        kLockpickingMod = 104,
        kSneakMod = 105,
        kAlchemyMod = 106,
        kSpeechcraftMod = 107,
        kAlterationMod = 108,
        kConjurationMod = 109,
        kDestructionMod = 110,
        kIllusionMod = 111,
        kRestorationMod = 112,
        kEnchantingMod = 113,
        kOneHandedSkillAdvance = 114,
        kTwoHandedSkillAdvance = 115,
        kMarksmanSkillAdvance = 116,
        kBlockSkillAdvance = 117,
        kSmithingSkillAdvance = 118,
        kHeavyArmorSkillAdvance = 119,
        kLightArmorSkillAdvance = 120,
        kPickPocketSkillAdvance = 121,
        kLockpickingSkillAdvance = 122,
        kSneakSkillAdvance = 123,
        kAlchemySkillAdvance = 124,
        kSpeechcraftSkillAdvance = 125,
        kAlterationSkillAdvance = 126,
        kConjurationSkillAdvance = 127,
        kDestructionSkillAdvance = 128,
        kIllusionSkillAdvance = 129,
        kRestorationSkillAdvance = 130,
        kEnchantingSkillAdvance = 131,
        kLeftWeaponSpeedMult = 132,
        kDragonSouls = 133,
        kCombatHealthRegenMult = 134,
        kOneHandedPowerMod = 135,
        kTwoHandedPowerMod = 136,
        kMarksmanPowerMod = 137,
        kBlockPowerMod = 138,
        kSmithingPowerMod = 139,
        kHeavyArmorPowerMod = 140,
        kLightArmorPowerMod = 141,
        kPickPocketPowerMod = 142,
        kLockpickingPowerMod = 143,
        kSneakPowerMod = 144,
        kAlchemyPowerMod = 145,
        kSpeechcraftPowerMod = 146,
        kAlterationPowerMod = 147,
        kConjurationPowerMod = 148,
        kDestructionPowerMod = 149,
        kIllusionPowerMod = 150,
        kRestorationPowerMod = 151,
        kEnchantingPowerMod = 152,
        kDragonRend = 153,
        kAttackDamageMult = 154,
        kHealRateMult = 155,
        kMagickaRateMult = 156,
        kStaminaRateMult = 157,
        kWerewolfPerks = 158,
        kVampirePerks = 159,
        kGrabActorOffset = 160,
        kGrabbed = 161,
        kDEPRECATED05 = 162,
        kReflectDamage = 163,
    };

    virtual ~ActorValueInfo();

    TESFullName name;
    uint8_t pad30[0x50 - 0x30];
    BSFixedString key;
};

static_assert(offsetof(ActorValueInfo, name) == 0x20);
static_assert(offsetof(ActorValueInfo, key) == 0x50);
