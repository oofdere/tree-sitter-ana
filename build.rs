use std::process::Command;

fn main() {
    // Run `tree-sitter generate` in the current directory
    let status = Command::new("tree-sitter")
        .args(&["generate", "-l"])
        .status()
        .expect("Failed to run `tree-sitter generate`");

    if !status.success() {
        panic!("`tree-sitter generate` failed with status: {}", status);
    }

    // Notify Cargo to rerun the build script if grammar.js changes
    println!("cargo:rerun-if-changed=grammar.js");
}