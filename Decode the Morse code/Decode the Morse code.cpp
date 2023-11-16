std::string decodeMorse(std::string morseCode) {
  
    std::string decoded;
    std::string buffer;
    std::string space = ""; // --stores spaces-- : IF space = 3 white spaces THEN decode += " " 
  
    for( auto p : morseCode ) {
      if(!(p == ' ')) // if char is not space
      {
        if(space == "   ")
          decoded += " ";
        space.clear();
        buffer += p;
      }
      else
      {
       decoded += MORSE_CODE[buffer];
       space += " ";
       buffer = "";
      }
      
      if(decoded.front() == ' ')
        decoded.erase(0,1);   
    }
  
    space = "";
    decoded += MORSE_CODE[buffer];
    return decoded;
}