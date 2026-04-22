N.B : Ceci est ma première app codé en C++

SchoolTerminal est une mini-application conçue pour simuler un système de gestion scolaire basique.
Elle permet à chaque élève de s’authentifier via un identifiant unique, d’enregistrer ses matières, notes et coefficients, et de calculer sa moyenne générale (sans base de données).

Pour executer actuellement le projet, vous aviez besoin suivre les instructions (en ligne de commande) ci dessous : 

1- Cloner le projet : git clone https://github.com/kingnaej/SchoolTerminal.git

2- cd SchoolTerminal

3- 

    # Si vous avez Visual Studio (recommandé sur Windows) :
        cmake -S . -B build
    # Si vous utilisez MinGW (comme moi) :
	    cmake -S . -B build -G "MinGW Makefiles"

4- cmake --build build

5- .\build\SchoolTerminal.exe ou .\build\src\SchoolTerminal.exe