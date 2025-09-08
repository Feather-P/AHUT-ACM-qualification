use std::io;

fn main() {
    let mut input = String::new();
    if let Ok(_) = io::stdin().read_line(&mut input) {}
    let mut sides: Vec<u32> = input
        .trim()
        .split_ascii_whitespace()
        .filter_map(|x| x.parse::<u32>().ok())
        .collect();
    sides.sort();

    if sides.get(0).unwrap() + sides.get(1).unwrap() <= *sides.get(2).unwrap() {
        println!("Not triangle");
    } else {
        if sides.get(0).unwrap().pow(2) + sides.get(1).unwrap().pow(2)
            == sides.get(2).unwrap().pow(2)
        {
            println!("Right triangle");
        }
        if sides.get(0).unwrap().pow(2) + sides.get(1).unwrap().pow(2)
            > sides.get(2).unwrap().pow(2)
        {
            println!("Acute triangle");
        }
        if sides.get(0).unwrap().pow(2) + sides.get(1).unwrap().pow(2)
            < sides.get(2).unwrap().pow(2)
        {
            println!("Obtuse triangle");
        }
        if sides.get(0).unwrap() == sides.get(1).unwrap()
            || sides.get(1).unwrap() == sides.get(2).unwrap()
        {
            println!("Isosceles triangle")
        }
        if sides.get(0).unwrap() == sides.get(1).unwrap()
            && sides.get(2).unwrap() == sides.get(1).unwrap()
        {
            println!("Equilateral triangle")
        }
    }
}
