use std::io;

fn main() {
    let mut input = String::new();
    io::stdin().read_line(&mut input).unwrap();

    let mut sides: Vec<u32> = input
        .trim()
        .split_whitespace()
        .filter_map(|s| s.parse().ok()) // 解析每个部分为 u32，过滤掉失败的
        .collect();
    sides.sort();

    let a = match sides.get(0) {
        Some(value) => *value,
        None => 0,
    };
    let b = match sides.get(2) {
        Some(value) => *value,
        None => 0,
    };
    let gcd = gcd(a, b);
    print!("{}/{}",a/gcd,b/gcd);
}

fn gcd(mut a: u32, mut b: u32) -> u32 {
    while b != 0 {
        let temp = b;
        b = a % b;
        a = temp;
    }
    a
}

#[cfg(test)]
mod tests {
    use crate::gcd;

    #[test]
    fn test_gcd() {
        let gcd1 =gcd(3, 4);
        assert_eq!(gcd1,1);
        let gcd2 = gcd(6, 9);
        assert_eq!(gcd2 , 3);
    }
}