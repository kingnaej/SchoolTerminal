#include <filesystem>
#include <fstream>
#include "functionality.hpp"

int main(int argc, char* argv[])
{
    std::filesystem::path const exeDir = std::filesystem::absolute(argv[0]);
    // 1. On définit le chemin du dossier data (juste à côté de l'exe)
    std::filesystem::path dataPath = exeDir.parent_path() / "data";

    // 2. Optionnel : Si on est en mode "développement" (dans build/src)
    // On vérifie si data n'est pas un cran au-dessus (à la racine du build)
    if (!std::filesystem::exists(dataPath) && std::filesystem::exists(exeDir.parent_path() / "data")) {
        dataPath = exeDir.parent_path() / "data";
    }

    // 3. Sécurité : Créer le dossier s'il n'existe nulle part
    if (!std::filesystem::exists(dataPath)) {
        std::filesystem::create_directories(dataPath);
        std::ofstream idFile {dataPath/"id.txt"};
    }

    beginProgram(dataPath);
    return 0;
}