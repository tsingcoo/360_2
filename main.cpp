#include <iostream>

int main() {
    std::string s1, s2, s3;
    while(std::cin>>s1&&std::cin>>s2&&std::cin>>s3){
        for(int i = 0; i<3; ++i){
            if(s1[i]==s3[2-i]&&s2[i]==s2[2-i]){
                if(i==2){
                    std::cout<<"YES"<<std::endl;
                }
            } else{
                std::cout<<"NO"<<std::endl;
                break;
            }
        }
    }
    return 0;
}