#include <vector> 

class Profile {

  private: 
  std::string name;
  int age;
  std::string city;
  std::string country;
  std::string pronouns;
  std::vector<std::string> hobbies;

  public: 
   Profile(std::string names, int ages, std::string cities, std::string countries, std::string pronounz = "they/them"); 
  
  std::string view_profile();

  // no return value of add_hobby
  void add_hobby(std::string new_hobby);
  
}; 
 
