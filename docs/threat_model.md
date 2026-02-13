# Threat Model

## 1. Assumptions

- Nodes may behave Byzantine
- Network may partition
- Engine noise may distort state

---

## 2. Attack Surfaces

### 2.1 State Corruption
Mitigation:
- Checkpoint hashing
- Immutable state snapshots

### 2.2 Consensus Manipulation
Mitigation:
- Threshold voting
- Weighted stake
- Multi-phase collapse

### 2.3 Runtime Resource Abuse
Mitigation:
- Execution boundaries
- Scheduler quotas

### 2.4 Kill Switch Abuse
Mitigation:
- Multi-signature governance approval
- Timelock activation

---

## 3. Safety Properties

- Deterministic collapse under same inputs
- No partial state commits
- Rollback always available
