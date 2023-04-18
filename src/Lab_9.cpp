#include <iostream>
#include <string>

class YouTubeChannel
{
public:
    std::string Name;
    int SubscribersCount;

    YouTubeChannel(std::string name, int subscribersCount)
    {
        Name = name;
        SubscribersCount = subscribersCount;
    }

    friend std::ostream &operator<<(std::ostream &os, const YouTubeChannel &obj)
    {

        os << "Channel name:" << obj.Name << " Subscriber count: " << obj.SubscribersCount << std::endl;

        return os;
    }
};
int main()
{
    YouTubeChannel yt1 = YouTubeChannel("Grade A Under A", 3680000);
    std::cout << yt1;
    return 0;
}
