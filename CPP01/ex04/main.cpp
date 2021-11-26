#include <iostream>
#include <fstream>

std::string replace_str(std::string str, std::string old_str, std::string new_str)
{
    std::string nstr;
    int i = 0;
    int j = 0;
    int save = 0;
 
    while (i < static_cast<int>(str.length()))
    {
        j = 0;
        if (str[i] == old_str[j])
        {
            save = i;
            while (old_str[j] && str[i] && str[i] == old_str[j])
            {
                ++i;
                ++j;
            }
            if (j == static_cast<int>(old_str.length()))
            {
                int k = 0;
                while (k < static_cast<int>(new_str.length()))
                    nstr += new_str[k++];
                --i;
            }
            else
            {
                i = save;
                nstr += str[i];
            }
        }
        else
            nstr += str[i];
        i++;
    }
    return (nstr);
}

void recording_oufile(char **argv, std::string str)
{
    std::ofstream   ofs("FILENAME.replace");
    ofs << replace_str(str, argv[2], argv[3]);
    ofs.close();
}

int read_infile(char **argv)
{
    std::ifstream   ifs(argv[1]);
    std::string     file_str;
    std::string     save_str;

    if (ifs.is_open())
    {
        while (std::getline(ifs, file_str))
        {
            save_str += file_str;
            if (!ifs.eof())
                save_str += '\n';
        }
    }
    else
    {
        std::cout << "Error: file open error" << std::endl;
        return (1);
    }
    if (save_str.size() == 0)
    {
        std::cout << "Error: empty file" << std::endl;
        return (1);
    }
    ifs.close();
    recording_oufile(argv, save_str);
    return (0);
}

int main(int argc, char **argv)
{
    if (argc != 4)
    {
        std::cout << "Error: wrong number of arguments" << std::endl;
        return (1);
    }
    if (argv[1][0] == '\0' || argv[2][0] == '\0' || argv[3][0] == '\0')
    {
        std::cout << "Error: argument is empty" << std::endl;
        return (1);
    }
    if (read_infile(argv))
        return (1);
    return (0);
}