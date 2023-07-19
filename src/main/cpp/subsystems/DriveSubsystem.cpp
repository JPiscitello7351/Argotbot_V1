// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#include "subsystems/DriveSubsystem.h"

DriveSubsystem::DriveSubsystem(const int leftDriveId, const int rightDriveId)
    : m_leftDrive{leftDriveId}, m_rightDrive{rightDriveId} {
        m_leftDrive.SetInverted(true);

    } 


void DriveSubsystem::ArcadeDrive(const double driveSpeed, const double turnSpeed) {
    m_leftDrive.Set(ControlMode::PercentOutput, driveSpeed + turnSpeed);
    m_rightDrive.Set(ControlMode::PercentOutput, driveSpeed - turnSpeed);
}

// This method will be called once per scheduler run
void DriveSubsystem::Periodic() {}
