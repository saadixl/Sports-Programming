var interpret = function(command) {
    let interpreted = command.replaceAll("()", "o");
    interpreted = interpreted.replaceAll("(", "");
    interpreted = interpreted.replaceAll(")", "");
    return interpreted;
};
