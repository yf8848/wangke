#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

struct SONG_INFO{
    int rate;
    string song;
    string singer;
};

bool comp_song(const SONG_INFO& a, const SONG_INFO& b)
{
    return a.rate>b.rate;
}

int main(int argc, char const *argv[]) {
    std::vector<SONG_INFO> v;
    for (size_t i = 0; i < 5; i++) {
        SONG_INFO s;
        cin >> s.song>>s.singer>>s.rate;
        v.push_back(s);
    }

    sort(v.begin(),v.end(),comp_song);

    for (size_t i = 0; i < v.size(); i++) {
        cout<<v[i].song<<" "<<v[i].singer<<" "<<v[i].rate<<endl;
    }

    return 0;
}
