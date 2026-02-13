# Kill Switch Flow

## 1. Trigger Conditions

- Consensus failure threshold exceeded
- State divergence detected
- Governance override
- Runtime resource exhaustion

---

## 2. Activation Flow

1. Detection event emitted
2. Governance approval (if required)
3. Runtime enters safe mode
4. Engine halted
5. State checkpoint locked

---

## 3. Safe Mode Behavior

- No new executions
- Read-only state
- Logging forced to audit mode

---

## 4. Recovery

- Manual review
- Rollback to last valid checkpoint
- Resume scheduler
