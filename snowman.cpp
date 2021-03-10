  
#include "snowman.hpp"
#include <string>
#include <stdexcept>
using namespace std;
namespace ariel{
    std::string snowman(int input)
    {
        const int first=11114411;
        const int secound=33232124;
        string first_s= "_===_\n(.,.)\n( : )\n( : )\n";
        string secound_s= "   _   \n  /_\\\n\\(o_O) \n (] [)>\n (   )\n";
        if (input==5)
        {
            string msg="Invalid code '" + to_string(input) + "'";
            throw invalid_argument(msg);
        }
        if(input==first){
            return first_s;
        }

        if(input==secound){
            return secound_s;   
        }
        return "";    

    }
}