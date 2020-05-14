use std::io;

fn checkNumber(str: make_choice) -> bool
{
    /*
    let chosen: u32 = match make_choice.trim().parse() {

    };
    if chosen in range {1..2}
    {
        return true;
    }
    else 
    {
        return false;
    }
    */

}

fn main() {
    println!("What do want to convert\n[1] Fahrenheit -> Celsius\n[2] Celsius -> Fahrenheit\nEnter:");
    
    let mut make_choice = String::new();
loop {
    //checkNumber
    io::stdin()
        .read_line(&mut make_choice)
        .expect("Failed to read line");


    println!("Chosen {}:", chosen)
    

    }
}
