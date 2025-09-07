fn main() {
    let size = 5;
    let mid = size/2;

    for i in 0..mid {
        for _ in 0..(mid-i) {
            print!(" ");
        }
        // 打印空格
        for _ in 0..(2 * i+1) {
            print!("*");
        }
        // 打印星号
        print!("\n");
    }
    // 上半部分
    for i in (0..mid+1).rev() {
        for _ in 0..(mid-i) {
            print!(" ");
        }
        // 打印空格
        for _ in 0..(2 * i+1) {
            print!("*");
        }
        // 打印星号
        print!("\n");
    }
}
