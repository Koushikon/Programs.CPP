#include <iostream>
#include <string>
#include <vector>
#include <array>

using std::array;
using std::cin;
using std::cout;
using std::string;
using std::vector;

class Movie;
class Movies;

class Movie
{
    string name{}, rate{};
    short watched{}, r_year{};
    float review{};
    // string director;
    // double budget;

public:
    Movie(string _name, string _rate, short _r_year, float _review);
    ~Movie();

    void display_movie() const;
};

class Movies
{
    vector<Movie> movie_list;

public:
    Movies();
    ~Movies();

    void add_movie();
    void display_movies() const;
};

Movie::Movie(string _name, string _rate, short _r_year, float _review)
    : name{_name}, rate{_rate}, r_year{_r_year}, review{_review}
{
    watched++;
}

Movie::~Movie() {}

void Movie::display_movie() const
{
    cout << "\t🎬 Name: " << name
         << "\n\t🎈 Release: " << r_year << " |🌠 Rating: " << rate
         << "\n\t⭐ User review: " << review << " |📺 Watched: " << watched
         << "\n\n";
}

Movies::Movies() {}

Movies::~Movies() {}

void Movies::add_movie()
{
    string name{};
    short rate{}, year{};
    float star{};
    array<string, 5> rating{"G", "PG", "PG-13", "NC-17", "R"};

    cout << "[+] Movie name? ";
    std::getline(cin, name);
    cout << "[+] Movie rating: \n"
         << "\t1 for G\n"
         << "\t2 for PG\n"
         << "\t3 for PG-13\n"
         << "\t4 for NC-17\n"
         << "\t5 for R\n";
    do
    {
        cout << "Now, Your choice? ";
        cin >> rate;
        rate--;
    } while (rate < 0 || rate > 4);
    cout << "[+] Movie Release year? \n";
    do
    {
        cout << "\tIt should be between 1860 and Current year(2021)? ";
        cin >> year;
    } while (year < 1860 || year > 2021);
    do
    {
        cout << "[+] Your Review between 1 to 5.0? ";
        cin >> star;
    } while (star < 1 || star > 5.0);
    cin.ignore();

    {
        Movie *mv1 = new Movie{name, rating.at(rate), year, star};
        movie_list.push_back(*mv1);
        delete mv1;
    }
    cout << "[#] Movie: " << name << " added Successfully ✔\n";
}

void Movies::display_movies() const
{
    cout << "\n[🥽] Movies list: \n";
    for (const Movie &movie : movie_list)
        movie.display_movie();
}

int main()
{
    // while (true)
    // {
    //     cout << "\n\n=========================="
    //          << "| Press,\n"
    //          << "|\tP-- >> To print numbers.\n"
    //          << "|\tA -->> To Add a number.\n"
    //          << "|\tR -->> To remove the last number.\n"
    //          << "|\tF -->> To find the number you want\n"
    //          << "|\tT or M -->> To display the Total & Mean of the numbers.\n"
    //          << "|\tS -->> To display the smallest number.\n"
    //          << "|\tL -->> To display the largest number.\n"
    //          << "|\tQ -->> To quit.\n"
    //          << "| \tSo, What's your choice? ";
    // }

    Movies mvs1;
    mvs1.add_movie();
    mvs1.add_movie();
    mvs1.display_movies();

    return 0;
}
