# Quantum Risk Model

## Risk Inputs

- Amplitude variance
- Consensus divergence
- Runtime stress
- State rollback frequency

---

## Risk Score Formula

Risk = 0.4A + 0.4C + 0.2R

Where:
A = amplitude variance
C = consensus divergence
R = runtime stress

---

## Risk Thresholds

| Score | Action |
|-------|--------|
| < 0.25 | Allow |
| < 0.5 | Monitor |
| < 0.75 | Escalate |
| >= 0.75 | Kill switch |
