# Hybrid and Embedded Control Systems – Homework 3

This repository contains solutions, controller implementations, and simulations for **Homework 3** of the course *EL2450: Hybrid and Embedded Control Systems* at KTH. The focus of this assignment is on **differential-drive robot navigation**, combining mathematical modeling, motion planning with transition systems, and hybrid control design. A final lab session involves testing the developed controller on a real TurtleBot3 robot in the Smart Mobility Lab.

## Project Overview

* **Course:** EL2450 – Hybrid and Embedded Control Systems
* **Assignment Date:** February 2025
* **Main Topics:**

  * Kinematic modeling of a differential-drive robot
  * Transition system abstraction of the workspace
  * High-level motion planning under temporal logic specifications
  * Design of rotation, go-to-goal, and line-following controllers
  * Hybrid automaton for navigation
  * Online simulation and real-world implementation on TurtleBot3

## Assignment Structure

### Part 1 – System Modeling

* Derivation of robot kinematics equations.
* Conversion between velocity inputs *(v, ω)* and wheel angular velocities *(ul, ur)*.

### Part 2 – Motion Planning

* Workspace discretization into regions.
* Transition system abstraction **T = (S, S0, Σ, →, AP, L)**.
* Specification-driven planning (visit “red”, then “blue”, avoid obstacles).

### Part 3 – Controller Design

* **Rotation controller:** aligns robot orientation.
* **Line-following controller:** navigates toward region centers.
* **Hybrid controller:** combines rotation and go-to-goal modes.

### Part 4 – Simulation

* Implementation in C/C++ (`OwnVariables.c`, `Controller.c`, `RenewControllerState.c`).
* Testing with online simulator and GUI.
* Logging results in CSV format and plotting with MATLAB.

### Part 5 – Lab Session

* Deployment and testing on a **TurtleBot3 Burger** robot with MoCap-based localization.
* Execution of planned waypoints in the Smart Mobility Lab.

## Repository Structure

```
.
├── code/
│   ├── OwnVariables.c
│   ├── Controller.c
│   ├── RenewControllerState.c
│
├── simulation/
│   ├── logs/             # CSV logs from simulator
│   ├── plots/            # MATLAB plots of robot trajectories
│
├── report/
│   └── Homework3_EL2450.pdf
│
└── README.md
```

## Usage Instructions

### Running in the Simulator

1. Upload `OwnVariables.c`, `Controller.c`, and `RenewControllerState.c` into the provided simulator.
2. Use the GUI to specify start and goal positions.
3. Enable logging to collect robot trajectory and control signals.
4. Use MATLAB to visualize performance.

### Running on the Real Robot

1. Bring the tested controller code to the Smart Mobility Lab.
2. Copy the same `.c` files into the TurtleBot3 setup.
3. Use the GUI to control and monitor robot navigation.
4. Execute the motion plan with waypoints derived from the transition system.

---

📄 This repository contains the full implementation, analysis, and experimental validation of Homework 3, combining motion planning, hybrid control, and real-world robotics.
