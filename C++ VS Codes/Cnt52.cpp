#include <iostream>
#include <cstring>
using namespace std;
class CWH
{
protected:
    string name;
    float rating;

public:
    CWH(string n, float r)
    {
        name = n;
        rating = r;
    }
    void display() {}
};
class Video : public CWH
{
protected:
    float video_length;

public:
    Video(string n, float t, float vl) : CWH(n, t)
    {
        video_length = vl;
    }
    void display(void)
    {
        cout << "The Name is: " << name << endl;
        cout << "The Ratings are: " << rating << endl;
        cout << "The Video Length is: " << video_length << endl;
    }
};
class Text : public CWH
{
protected:
    int num_text;

public:
    Text(string n, float r, int nt) : CWH(n, r)
    {
        num_text=nt;
    }
    void display(void)
    {
        cout << "The Name is: " << name << endl;
        cout << "The Ratings are: " << rating << endl;
        cout << "The Text Length is: " << num_text << endl;
    }
};
int main()
{     string title;
    float rating, vlen;
    int words;

    // for Code With Harry Video
    title = "Django tutorial";
    vlen = 4.56;
    rating = 4.89;
    Video djVideo(title, rating, vlen);

    // for Code With Harry Text
    title = "Django tutorial Text";
    words = 433;
    rating = 4.19;
  Text djText(title, rating, words);

    CWH *tuts[2];
    tuts[0] = &djVideo;
    tuts[1] = &djText;

    tuts[0]->display();
    tuts[1]->display();
    return 0;
}