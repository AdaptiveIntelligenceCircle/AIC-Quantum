# Cross Language Contracts

## 1. ABI Compatibility

Public interfaces exposed via:

- C-compatible headers
- Stable struct layout
- Explicit versioning

---

## 2. Memory Ownership Rules

- Caller allocates
- Callee never frees external buffers
- No hidden global state

---

## 3. FFI Safe Structures

Allowed:
- POD structs
- Fixed-size arrays
- uint32_t / uint64_t
- double

Forbidden:
- std::string
- std::vector
- Exceptions across boundary

---

## 4. Determinism Guarantee

All exposed APIs must:
- Avoid undefined behavior
- Avoid floating-point nondeterminism
- Be reproducible across platforms
