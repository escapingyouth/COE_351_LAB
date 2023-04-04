#include <iostream>
#include <string>
#include <vector>

class YoutubeChannel
{

private:
    std::string name;
    std::string OwnerName;
    std::vector<std::string> PublishedVideoTitles;
    unsigned int SubscriberCount;

public:
    // default constructor - no args
    YoutubeChannel(){};
    YoutubeChannel(std::string channel_name, std::string owner_name, unsigned int subscriber_count = 0)
        : name{channel_name}, OwnerName{owner_name}, SubscriberCount{subscriber_count} {};

    // displays information about the channel
    void GetInfo() const;

    // increases subscriber count by 1
    void Subscribe();

    // decreases subscriber count by 1 if not zero
    void Unsubscribe();

    // returns the value of name
    std::string get_name() const;

    // sets the value of name
    void set_name(std::string name);

    // A method which will add a video to PublishedVideoTitles, the list of published videos
    void PublishVideo(std::string video);
};

void YoutubeChannel::GetInfo() const
{
    std::cout << "Channel name: " << name << std::endl;
    std::cout << "Owner name: " << OwnerName << std::endl;
    std::cout << "Subscriber count: " << SubscriberCount << std::endl;

    std::cout << "Published video titles: ";
    for (const auto &video : PublishedVideoTitles)
    {
        std::cout << video << " " << std::endl;
    }
}

void YoutubeChannel::Subscribe()
{
    SubscriberCount++;
}

void YoutubeChannel::Unsubscribe()
{
    if (SubscriberCount > 0)
        SubscriberCount--;

    else
        SubscriberCount = 0;
}

std::string YoutubeChannel::get_name() const
{
    return name;
}

void YoutubeChannel::set_name(std::string name)
{
    this->name = name;
}

void YoutubeChannel::PublishVideo(std::string video)
{
    PublishedVideoTitles.push_back(video);
};

int main()
{
    YoutubeChannel ytChannel("OOP Simplified", "Michael Appiah");
    ytChannel.PublishVideo("Stuck on pointers? Watch this!");
    ytChannel.Unsubscribe();
    ytChannel.GetInfo();

    for (size_t i{0}; i < 20; i++)
    {
        ytChannel.Subscribe();
    }

    ytChannel.GetInfo();
}