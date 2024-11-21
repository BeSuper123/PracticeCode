// this allows user input
const readline = require('readline').createInterface({
    input: process.stdin,
    output: process.stdout
});



// this is an array for all the counties in the north of Ireland
var northL = ['Armagh', 'Londonderry', 'Tyrone', 'Fermanagh', 'Donegal'];


// this is an array for all the counties in the south of Ireland
var southL = ['Waterford', 'Tipperary', 'Limerick', 'Cork', 'Kerry'];


// this adds all the arrays and makes them all 1 array
var all = northL.concat(southL);


// these variables will be used in the for loop 
var i, len, text, ans



// this class is so the methods are all organised and easy to reach
class Hotel {

    // the code below will print out all the strings in the northL array
    static north() {

        for (i = 0, len = northL.length, text = "\n"; i < len; i++) {

            
            text += "There are hotels in " + northL[i] + ".\n"

        }

        return text
    }







    // the code below will print out all the strings in the southL array
    static south() {

        for (i = 0, len = southL.length, text = "\n"; i < len; i++) {

            
            text += "There are hotels in " + southL[i] + ".\n"

        }

        return text
    }








    // the code below will print out strings in all of the arrays combined
    static allLocations() {

        for (i = 0, len = all.length, text = "\n"; i < len; i++) {

            
            text += "There are hotels in " + all[i] + ".\n"

        }

        return text
    }



}











// this question is to ask the user what location they're looking for hotels in
readline.question("\nWhere are you looking for hotels? \n", ans => {



    // the code below prints out the north() method in the Hotel class depending on if the user mentions 'nor' in their input
    if (ans.includes("nor") || ans.includes("Nor")) {

        console.log("\n" + Hotel.north())






    // the code below prints out the south() method in the Hotel class depending on if the user mentions 'sou' in their input
    } else if (ans.includes("sou") || ans.includes("Sou")) {

        console.log("\n" + Hotel.south())







    // the code below prints out the allLocations() method in the Hotel class depending if the user mentions 'any' or 'all' in their input
    } else if (ans.includes("all") || ans.includes("any")) {

        console.log("\n" + Hotel.allLocations())






    // the code below is printed out if the users input doesn't include any of the locations above
    } else {

        console.log("\nSorry that location isn't available.")



    }
        
    // this closes the user input so the program will end.
    readline.close()
})
