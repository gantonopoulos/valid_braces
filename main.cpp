#include <iostream>
#include <map>
#include <queue>
#include <functional>

bool valid_braces(std::string braces)
{
    std::map<char,char> bracePairs = {{'}','{'},{')','('},{']','['}};
    std::function<bool(char)> isOpeningBrace = [&bracePairs](char token)
    {
        return std::any_of(bracePairs.cbegin(), bracePairs.cend(), [&token](std::map<int, int>::iterator it)
        { return it->second == token; });
    };

    std::queue<char> unclosedBracePairs;
    for (char brace : braces)
    {
        if(isOpeningBrace(unclosedBracePairs.back())
        if(isOpeningBrace(brace))
            unclosedBracePairs.push(brace);

    }
    return unclosedBracePairs.empty();
}

int main()
{
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
