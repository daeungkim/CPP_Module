/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunkim <seunkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/18 17:01:43 by seunkim           #+#    #+#             */
/*   Updated: 2020/09/18 19:06:31 by seunkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

// change string s1 to s2 in string content
std::string changeS1ToS2(std::string content, std::string s1, std::string s2)
{
    int pos = 0;

    while ((pos = content.find(s1, pos)) >= 0)
    {   
        content.replace(pos, s1.size(), s2);
        pos = pos + s1.size();
    }
    return content;
}

int main(int argc, char *argv[])
{
    if (argc != 4)
    {
        std::cout << "input filename, s1, s2" << std::endl;
        return 0;
    }
    std::ifstream   in(argv[1]);
    std::string     content;

    std::string s1 = argv[2];
    std::string s2 = argv[3];
    
    if(in.is_open())
    {
        // 위치 지정자를 파일 끝으로 옮긴다.
        in.seekg(0, std::ios::end);
    
        // 그리고 그 위치를 읽는다. (파일의 크기)
        int size = in.tellg();
    
        // 그 크기의 문자열을 할당한다.
        content.resize(size);
    
        // 위치 지정자를 다시 파일 맨 앞으로 옮긴다.
        in.seekg(0, std::ios::beg);
    
        // 파일 전체 내용을 읽어서 문자열에 저장한다.
        in.read(&content[0], size);
    }
    else
    {
        std::cout << "file not found" << std::endl;
        return 0;
    }
    
    content = changeS1ToS2(content, s1, s2);

    // make FILENAME.replace
    std::string new_file_name = argv[1];
    new_file_name += ".replace";

    //put new content in FILENAME.replace
    std::ofstream out(new_file_name);

    if (out.is_open())
    {
        out << content;
    }
}