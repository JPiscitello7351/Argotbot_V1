// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#include "RobotContainer.h"

#include "frc2/command/RunCommand.h"

RobotContainer::RobotContainer() : m_drive{2, 1}, m_Controller{0} {
  
  m_drive.SetDefaultCommand(frc2::RunCommand(
  
    [this] {

      m_drive.ArcadeDrive(1,0);

    },


  {&m_drive}));

  // Initialize all of your commands and subsystems here
  // Configure the button bindings
  ConfigureBindings();
}

void RobotContainer::ConfigureBindings() {
  // Configure your trigger bindings here
}

frc2::Command* RobotContainer::GetAutonomousCommand() {
  // An example command will be run in autonomous
  return nullptr;
}
