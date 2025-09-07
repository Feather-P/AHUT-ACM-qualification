use std::io;
fn main() {
    let mut input = String::new();
    io::stdin().read_line(&mut input).unwrap();
    let s:char = input.trim().parse().unwrap();
    for i in 0..3 {
        for _ in 0..(2-i) {
            print!(" ");
        }
        for _ in 0..i*2 + 1 {
            print!("{}",s);
        }
        print!("\n")
    }
}