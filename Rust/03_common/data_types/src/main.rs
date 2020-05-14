fn main() {
    
    let x = 2.0;
    let y: f32 = 3.0; // with explicit type annotation

    println!("The value of x is {}",x);
    println!("The value of y is {}",y);

    /*
    * Numeric operations
    */

    //addition
    let sum = 5 + 10;
    println!("The value of sum is {}",sum);

    //difference
    let difference = 95.5 - 4.3;
    println!("The value of difference is {}",difference);

    //multiplication
    let product = 4 * 30;
    println!("The value of product is {}",product);

    //division
    let division = 56.7 / 32.2;
    println!("The value of division is {}",division);

    //remainder 
    let remainder = 43 % 5;
    println!("The value of remainder is {}",remainder);

    /*
    * The boolean type
    */
    let t = true;
    let f: bool = false; // with explicit type annotation
    println!("The value of t is {}",t);
    println!("The value of f is {}",f);

    /*
    * The character type
    */
    let c = 'z';
    let z = 'ℤ';
    let heart_eyed_cat = '😻';
    println!("The value of c is {}",c);
    println!("The value of z is {}",z);
    println!("The value of heart_eyed_cat is {}",heart_eyed_cat);

    /*
    * Compound types
    *
    * tuple types
    */
    let tup: (i32, f64, u8) = (500, 6.4, 1);
    let (x,y,z) = tup;  //destructuring
    println!("The value of tup(x,y,z) is {} {} {}",x, y, z);

    let five_hundred = tup.0;
    let six_point_four = tup.1;
    let one = tup.2;
    println!("The value of tup.x(1..3) is {} {} {}",five_hundred, six_point_four, one);

    /*
    * array type
    */
    let array = [1,2,3,4,5];
        println!("The value of array[x] is {}",array[4]);


    let months = ["January", "February", "March", "April", "May", "June", "July",
    "August", "September", "October", "November", "December"];
    println!("The value of month is {}",months[4]);
    
    let a: [i32; 5] = [-1,2,-3,4,-5]; //[type:size]
    println!("The value of a[x] is {}",a[4]);
    
    let a = [3; 5]; // [3,3,3,3,3]
    println!("The value of a[0..2] is {} {} {}", a[0], a[1], a[2]);
    

    

}
