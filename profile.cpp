#include <iostream>
#include "profile.hpp"


// defining the constructor in .cpp

// constructor object(name_for_constructor object)

Profile::Profile(std::string names, int ages, std::string cities, std::string countries, std::string pronounz):

  name(names), age(ages), city(cities), country(countries), pronouns(pronounz) {

  }


std::string Profile::view_profile() {
  std::string bio = "Name: " + name;
  bio += "\nAge: " + std::to_string(age);
  // to_string converts the int to std::string
  bio += "\nCities: " + city;
  std::string hobby_string = "Hobbies:\n";
  
  return bio;
}

void Profile add_hobby(std::string new_hobby) {
  hobbies.push_back(new_hobby);
  // push_back = .append() new string to Profile

   for (std::string hobby : hobbies) {
 
    hobby_string += " - " + hobby + "\n";
 
  }
 
  return bio + "\n" + hobby_string;
}
