//===----------------------------------------------------------------------===//
//
// Philipp Schubert
//
//    Copyright (c) 2017 - 2021
//    Secure Software Engineering Group
//    Heinz Nixdorf Institute
//    Paderborn University
//    philipp.schubert@upb.de
//
//===----------------------------------------------------------------------===//

#include <iostream>
#include <string>

int main()
{
  int adenin = 0;
  int cytosin = 0;
  int guanin = 0;
  int thymin = 0;

  const std::string dna = "AGTcccaaGTCAGACAATGAAtataAATCG";
  // This "range-for" loop iterates the string 'dna'.
  for (char base : dna)
  {
    // You can use the variable 'base' inside this loop.
    if (base == 'a' || base == 'A')
    {
      adenin++;
    }
    else if (base == 'c' || base == 'C')
      cytosin++;
    else if (base == 'g' || base == 'G')
      guanin++;
    else if (base == 't' || base == 'T')
      thymin++;
    else
      std::cout << "Error in the sequence...\n";
  }
  std::cout << "Result...\n";
  std::cout << "adenin: " << adenin << std::endl;
  std::cout << "Cytosin: " << cytosin << std::endl;
  std::cout << "Guanin: " << guanin << std::endl;
  std::cout << "thymin: " << thymin << std::endl;

  std::string dnaSequence;
  std::cout << "input a dna sequence: ";
  std::cin >> dnaSequence;
  std::cout << std::endl;

  int lowercase = 0;
  int uppercase = 0;
  for (char base : dnaSequence)
  {
    if (base == 'a' || base == 'c' || base == 'g' || base == 't')
      lowercase++;
    else if (base == 'A' || base == 'C' || base == 'G' || base == 'T')
      uppercase++;
  }

  std::cout << "lowercase: " << lowercase << std::endl;
  std::cout << "uppercase: " << uppercase << std::endl;

  return 0;
}
