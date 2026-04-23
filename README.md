N.B : Ceci est ma première app codé en C++

SchoolTerminal est une mini-application conçue pour simuler un système de gestion scolaire basique.
Elle permet à chaque élève de s’authentifier via un identifiant unique, d’enregistrer ses matières, notes et coefficients, et de calculer sa moyenne générale (sans base de données).

Pour executer actuellement le projet, vous aviez besoin suivre les instructions (en ligne de commande) ci dessous : 


### 1. Prérequis
* Un compilateur C++ (GCC, Clang ou MSVC)
* CMake 3.20 ou plus

### 2. Compilation

* 1- Cloner le projet : git clone https://github.com/kingnaej/SchoolTerminal.git
* 2- cd SchoolTerminal

* 3- 

    #### Pour Windows avec Visual Studio, Linux ou MAC :
        cmake -S . -B build
    #### Pour Windows avec MinGW :
	    cmake -S . -B build -G "MinGW Makefiles"

* 4- cmake --build build

### 3. DISTRIBUTION

    cmake --install build --prefix ./dist

### 4. LANCER L'APP

    # Pour Windows

		.\dist\bin\SchoolTerminal.exe

	# Linux / macOS

		./dist/bin/SchoolTerminal