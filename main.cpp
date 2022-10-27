//
//  main.cpp
//  cpsc298MusicalNote
//
//  Created by Pranav Saravanan on 10/26/22.
//

#include <iostream>
#include <math.h>

int main(int argc, const char * argv[]) {
    
    float referenceFrequency = 16.35;
    double dTwelfthRootOfTwo = 1.059463094359;
    double powerOfOctaveC0 = pow(2.0,0);
    double powerOfOctaveC4 = pow(2.0,4.0);
    double powerOfOctaveD7 = pow(2.0,7.0);
    double powerOfOctaveC8 = pow(2.0,8.0);
    
    double kC0 = pow(dTwelfthRootOfTwo, 0);
    double kC00 = pow(dTwelfthRootOfTwo, 1);
    double kD0 = pow(dTwelfthRootOfTwo, 2);
    double kC4 = pow(dTwelfthRootOfTwo, 0);
    double kD7 = pow(dTwelfthRootOfTwo, 3);
    double kC8 = pow(dTwelfthRootOfTwo, 0);
    
    int speedOfSound = 345;
    
    std::cout <<"Note C0; nu: 0; k: 0; frequency: " << (referenceFrequency * powerOfOctaveC0 * kC0) << " HZ; wavelength: " << (speedOfSound/(referenceFrequency * powerOfOctaveC0 * kC0)*100) << " cm" << std::endl;
    
    std::cout <<"Note C#0; nu: 0; k: 1; frequency: " << (referenceFrequency * powerOfOctaveC0 * kC00) << " HZ; wavelength: " << ((speedOfSound/(referenceFrequency * powerOfOctaveC0 * kC00))*100)<< " cm" << std::endl;
    
    std::cout <<"Note D0; nu: 0; k: 2; frequency: " << (referenceFrequency * powerOfOctaveC0 * kD0) << " HZ; wavelength: " << ((speedOfSound/(referenceFrequency * powerOfOctaveC0 * kD0))*100)<< " cm" << std::endl;
    
    std::cout <<"Note C4; nu: 4; k: 0; frequency: " << (referenceFrequency * powerOfOctaveC4 * kC4) << " HZ; wavelength: " << ((speedOfSound/(referenceFrequency * powerOfOctaveC4 * kC4))*100)<< " cm" << std::endl;
    
    std::cout <<"Note D#7; nu: 7; k: 3; frequency: " << (referenceFrequency * powerOfOctaveD7 * kD7) << " HZ; wavelength: " << ((speedOfSound/(referenceFrequency * powerOfOctaveD7 * kD7))*100)<< " cm" << std::endl;
    
    std::cout <<"Note C8; nu: 8; k: 0; frequency: " << (referenceFrequency * powerOfOctaveC8 * kC8) << " HZ; wavelength: " << ((speedOfSound/(referenceFrequency * powerOfOctaveC8 * kC8))*100)<< " cm" << std::endl;
    
    return 0;
    
    
    
    
}
