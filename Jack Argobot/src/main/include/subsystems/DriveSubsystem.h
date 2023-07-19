// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#pragma once

#include <ctre/Phoenix.h>
#include <frc2/command/SubsystemBase.h>

class DriveSubsystem : public frc2::SubsystemBase {
 public:
  DriveSubsystem(const int leftDriveId, const int rightDriveId);

  void ArcadeDrive(const double driveSpeed, const double turnSpeed);


  /**
   * Will be called periodically whenever the CommandScheduler runs.
   */
  void Periodic() override;

 private:
  // Components (e.g. motor controllers and sensors) should generally be
  // declared private and exposed only through public methods.

  phoenix::motorcontrol::can::WPI_TalonSRX m_leftDrive;
  phoenix::motorcontrol::can::WPI_TalonSRX m_rightDrive;

};
