function Modal(props) {
  function cancelhandler() {
    props.onCancel();
  }
  function confirmhandler() {
    props.onConfirm();
  }

  return (
    <div className="modal">
      <p>Are you Sure?</p>
      <button className="btn btn--alt" onClick={cancelhandler}>
        Cancel
      </button>
      <button className="btn" onClick={confirmhandler}>
        confirm
      </button>
    </div>
  );
}
export default Modal;
