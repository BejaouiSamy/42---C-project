#include <iostream>
#include <fstream>
#include <string>

std::string replaceAll(std::string str, const std::string& from, const std::string& to)
{
    size_t pos = 0;
    
    while ((pos = str.find(from, pos)) != std::string::npos) // npos deja dans string
    {
        str.erase(pos, from.length());
        str.insert(pos, to);
        pos += to.length();
    }
    
    return str;
}

int main(int argc, char **argv)
{
    if (argc != 4)
    {
        std::cerr << "Usage: ./sed_replace <filename> <s1> <s2>" << std::endl;
        return 1;
    }
    
    std::string filename = argv[1];
    std::string s1 = argv[2];
    std::string s2 = argv[3];
    
    // Vérifier que s1 n'est pas vide
    if (s1.empty())
    {
        std::cerr << "Error: s1 cannot be empty" << std::endl;
        return 1;
    }
    
    //Ouvrir le fichier d'entrée
    std::ifstream infile(filename.c_str()); // c_str car en c++98 sinon ne compile pas
    if (!infile.is_open())
    {
        std::cerr << "Error: Could not open file " << filename << std::endl;
        return 1;
    }
    
    // Créer le fichier de sortie
    std::string outFilename = filename + ".replace";
    std::ofstream outfile(outFilename.c_str());
    if (!outfile.is_open())
    {
        std::cerr << "Error: Could not create file " << outFilename << std::endl;
        infile.close();
        return 1;
    }
    
    // Lire, remplacer, écrire
    std::string line;
    while (std::getline(infile, line)) //getline (entree, stock);
    {
        // Remplacer toutes les occurrences dans la ligne
        std::string modifiedLine = replaceAll(line, s1, s2);
        
        // Écrire dans le fichier de sortie
        outfile << modifiedLine << std::endl;
    }
    
    // Fermer les fichiers
    infile.close();
    outfile.close();
    
    std::cout << "File created: " << outFilename << std::endl;
    
    return 0;
}