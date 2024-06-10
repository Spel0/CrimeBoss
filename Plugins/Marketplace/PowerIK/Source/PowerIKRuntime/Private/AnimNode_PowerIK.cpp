#include "AnimNode_PowerIK.h"
#include "Animation/InputScaleBias.h"

FAnimNode_PowerIK::FAnimNode_PowerIK() {
    (*this).CharacterRoot = TEXT("pelvis");
    (*this).RootRotationMultiplier = 1.000000000e+00f;
    (*this).BodyInertia.ApplyInertiaToBody = false;
    (*this).BodyInertia.SmoothFactor = 5.000000000e+00f;
    (*this).BodyInertia.UseSpring = false;
    (*this).BodyInertia.SpringStrength = 1.000000000e+02f;
    (*this).BodyInertia.SpringDamping = 2.000000030e-01f;
    auto& gen1640 = (*this).BendDirections;
    gen1640.Empty();
    auto& gen1641 = (*this).ExcludedBones;
    gen1641.Empty();
    auto& gen1642 = (*this).JointLimits;
    gen1642.Empty();
    auto& gen1643 = (*this).Effectors;
    gen1643.Empty();
    (*this).SmoothingMaxSpeedMultiplier = 1.000000000e+00f;
    (*this).SmoothingMaxDistanceMultiplier = 1.000000000e+00f;
    (*this).CenterOfGravityConstraint.Alpha = 0.000000000e+00f;
    (*this).CenterOfGravityConstraint.HorizAmount = 1.200000048e+00f;
    (*this).CenterOfGravityConstraint.VertAmount = 3.000000119e-01f;
    (*this).CenterOfGravityConstraint.PullBodyAmount = 4.000000060e-01f;
    (*this).MaxSquashIterations = 6;
    (*this).MaxStretchIterations = 6;
    (*this).MaxFinalIterations = 3;
    (*this).AllowBoneTranslation = false;
    (*this).SolverAlpha = 1.000000000e+00f;
    (*this).DebugDrawSize = 2.000000000e+01f;
}

