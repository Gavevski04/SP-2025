# Contributing

## Branching
- Create a feature branch from `main`: `feature/<short-description>`

## Commits
- Use clear messages, present tense (e.g., "Add calculator input validation")

## Pull Requests
- Keep PRs focused and small
- Link issues with “Fixes #<issue-number>” in the PR description or commits
- Add a short summary of changes and how to test

## Code Style
- C++: keep files small and self-contained
- Prefer clear naming over brevity; add brief comments only where needed
- Keep README and docs sections tidy and up to date

## Testing
- For C++ programs, compile and run before opening a PR:
  - g++ <file>.cpp -o <file> && .\<file>
