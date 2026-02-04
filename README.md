# Compiler-Lex-Yacc

A compact compiler front‑end built with Flex (Lex) and Bison (Yacc). It supports a C‑like language with variables, functions, control flow, semantic checks, and quadruple generation.

## What This Includes

- **Lexer** in `Lexer.l` (tokens for keywords, identifiers, literals, operators)
- **Parser** in `Parser.y` (grammar + semantic actions)
- **Semantic checks** in `semantic_checks.c/.h`
- **Symbol table** implementation in `symbol_table.c/.h`
- **Quadruple (IR) generation** in `quad.c/.h`
- **Optional GUI** using Flask in `GUI/`

## Language Features (Supported)

- Data types: `int`, `float`, `char`, `string`, `bool`, `void`
- Variables and `const` declarations
- Arithmetic and logical expressions
- `if/else`, `while`, `do/while`, `for`, `switch/case/default`, `break`
- Functions with parameters and return checking

## Project Structure

- `Lexer.l` — Flex lexer rules
- `Parser.y` — Bison grammar + semantic actions
- `symbol_table.c/.h` — scoped symbol table with parameter tracking
- `semantic_checks.c/.h` — type checks, return checks, and error handling
- `quad.c/.h` — quadruple intermediate representation
- `MakeFile` — build/run commands
- `text.txt` — sample input program
- `GUI/` — Flask-based web UI

Generated files (ignored by `.gitignore`):
- `lex.yy.c`, `Parser.tab.c`, `Parser.tab.h`, `Parser.output`
- `compiler.exe`

## Build & Run (CLI)

### Requirements

- Flex
- Bison
- GCC (MinGW on Windows)

### Build

```bash
bison -d -v Parser.y
flex Lexer.l
gcc Parser.tab.c lex.yy.c symbol_table.c semantic_checks.c quad.c -o compiler.exe -lfl
```

### Run

```bash
./compiler.exe text.txt
```

The sample `text.txt` already contains a valid test program.

### Output Artifacts

- `quad.txt` — generated quadruples
- `symbol_table_output.txt` — symbol table snapshots

## GUI (Optional)

A simple web UI is available under `GUI/`. Run the GUI:

```bash
cd GUI
python app.py
```

Then open the app in your browser (default Flask port).

The GUI sends code to the backend, writes it into `text.txt`, and runs `compiler.exe`.

**Note:** `compiler.exe` must exist in the project root before running the GUI.

## Notes

- Warnings are emitted for unused variables when leaving a scope.
- Errors are reported with line numbers (lexical line tracking in `Lexer.l`).
